#include <iostream>
using namespace std;

class small_set
{

private:
    int size=0;
    int *A = new int[];
    int a;

public:
    void set(int item);

    void clear(int item);

    int test(int num);
};

int main()
{

    return 0;
}

void small_set::set(int item)
{
    if(item<31&&item>0)
    {
        A[size]=item;
        size++;
    }
}

void small_set::clear(int item)
{
}

int small_set::test(int num)
{
    return 0;
}