
#include <iostream>
template <class T>
class Matrix
{
private:
    int dimension;
    T **m;

public:
    Matrix(int n);
    Matrix(const Matrix &orig);
    ~Matrix();
    void set(int x, int y, T w);
    Matrix<T> operator*(const Matrix<T> &l);

    template <class U>
    friend std::ostream &operator<<(std::ostream &out, const Matrix<U> &ma);
};

template <class T>
Matrix<T>::Matrix(int n) : dimension{n}
{
    m = new T *[dimension];
    for (int i = 0; i < dimension; i++)
    {
        m[i] = new T[dimension];
    }
}

template <class T>
Matrix<T>::Matrix(const Matrix &orig) : dimension{orig.dimension}
{
    m = new T *[dimension];
    for (int i = 0; i < dimension; i++)
    {
        m[i] = new T[dimension];
        for (int j = 0; j < dimension; j++)
        {
            m[i][j] = orig.m[i][j];
        }
    }
}

template <class T>
Matrix<T>::~Matrix()
{
    for (int i = 0; i < dimension; i++)
    {
        delete[] m[i];
    }
    delete[] m;
}

template <class T>
void Matrix<T>::set(int x, int y, T w)
{
    m[x][y] = w;
}

template <class T>
Matrix<T> Matrix<T>::operator*(const Matrix<T> &l)
{
    Matrix<T> erg{dimension};
    for (int i = 0; i < dimension; i++)
    {
        for (int j = 0; j < dimension; j++)
        {
            erg.m[i][j] = 0;
            for (int k = 0; k < dimension; k++)
            {
                erg.m[i][j] += this->m[i][k] * l.m[k][j];
            }
        }
    }
    return erg;
}

template <class T>
std::ostream &operator<<(std::ostream &out, const Matrix<T> &ma)
{
    for (int i = 0; i < ma.dimension; i++)
    {
        for (int j = 0; j < ma.dimension; j++)
        {
            out << ma.m[i][j] << " ";
        }
        out << std::endl;
    }
    return out;
}

int main()
{
    Matrix<int> m(2);
    m.set(0, 0, 1);
    m.set(0, 1, 2);
    m.set(1, 0, 3);
    m.set(1, 1, 4);
    std::cout << m << "*" << std::endl
              << m << "=" << std::endl
              << m * m;
    return 0;
}
