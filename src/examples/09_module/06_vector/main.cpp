//
#include "vector.h"

using std::cout;

int main()
{
    Vector v(3);
    v.Pushback(3);

    cout<<v[0]<<"\n";
    cout<<v.Size()<<"\n";
    cout<<v.Capacity()<<"\n";

    /*
    cout<<"Before function executes...\n";
    use_stack_vector();
    cout<<"After function executes...\n";

    cout<<"Before function executes...\n";
    use_heap_vector();
    cout<<"After function executes...\n";*/

    return 0;
}

