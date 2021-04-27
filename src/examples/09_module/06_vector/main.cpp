//
#include "vector.h"

using std::cout;

int main()
{
    cout<<"Before function executes...\n";
    use_stack_vector();
    cout<<"After function executes...\n";

    cout<<"Before function executes...\n";
    use_heap_vector();
    cout<<"After function executes...\n";

    return 0;
}

