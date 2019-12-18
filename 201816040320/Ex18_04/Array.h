#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED


using namespace std;
template <class T>
class Array
{

    friend ostream &operator<<(ostream &output,const Array<T> &a)
{
    for(size_t i=0;i<a.size;++i)
    {
        output <<setw(12)<<a.ptr[i];
        if((i+1)%4==0)
            output<<endl;
    }

    return output;
}

    friend istream &operator>>(istream &input,Array<T> &a)
{
    for(size_t i=0;i<a.size;++i)
        input>>a.ptr[i];
    return input;
}

public:
    explicit Array(size_t arraySize = 10)
:size(arraySize),ptr(new T[size])
{
    for(size_t i=0;i<size;++i)
        ptr[i]=0;
}

    Array(const Array<T> &arrayToCopy)
{
    size = arrayToCopy.size;
    ptr = new T[size];
    for(size_t i=0;i<size;++i)
        ptr[i] = arrayToCopy.ptr[i];
}

    ~Array()
{
    delete [] ptr;
}


    size_t getSize() const
{
    return size;
}


    const Array &operator=(const Array<T> &right)
{
    if(&right !=this)
    {
        if(size != right.size)
        {
            delete [] ptr;
            size = right.size;
            ptr = new T[size];
        }
        for(size_t i=0;i<size;++i)
            ptr[i]=right.ptr[i];
    }
    return *this;
}

    bool operator==(const Array<T> &right) const
{
    if(size != right.size)
        return false;
    for(size_t i=0;i<size;++i)
        if(ptr[i]!=right.ptr[i])
            return false;

    return true;

}

    bool operator!=(const Array<T> &);

    T &operator[](size_t sub)
{
    return ptr[sub];
}

    T operator[](size_t sub) const
{
    return ptr[sub];
}

private:
    size_t size;
    T *ptr;
};

#endif // ARRAY_H_INCLUDED
