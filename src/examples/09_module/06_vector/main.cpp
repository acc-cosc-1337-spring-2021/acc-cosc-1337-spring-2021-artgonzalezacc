//
#include "vector.h"
#include<vector>
using std::vector;
using std::cout;

int main()
{
    /*int result = add<int>(5,5);
    cout<<result<<"\n";

    double result1 = add<double>(5.5,5.5);
    cout<<result1<<"\n";*/

    Vector<int> v(3);
    v.Pushback(3);

    cout<<v[0]<<"\n";
    cout<<v.Size()<<"\n";
    cout<<v.Capacity()<<"\n";

    Vector<double> v1(3);
    v1.Pushback(10.5);
    cout<<v1[0]<<"\n";


    /*
    cout<<"Before function executes...\n";
    use_stack_vector();
    cout<<"After function executes...\n";

    cout<<"Before function executes...\n";
    use_heap_vector();
    cout<<"After function executes...\n";*/

    return 0;
}

