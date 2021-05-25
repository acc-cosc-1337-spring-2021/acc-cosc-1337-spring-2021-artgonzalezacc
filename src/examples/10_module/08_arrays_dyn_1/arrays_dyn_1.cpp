#include "arrays_dyn_1.h"

std::ostream& operator<<(std::ostream& out, const String& s)
{
    out<<s.sequence;

    return out;
}

std::istream& operator>>(std::istream& in, String& s)
{
    in.getline(s.sequence, s.size);

    return in;
}