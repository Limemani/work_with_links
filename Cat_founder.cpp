#include <iostream>

using namespace std;

void UptadateIfGreater(int new_facts, int& distans) {
    if (new_facts > distans) {
        distans = new_facts;
    }
}

int main()
{
    int max_distans = 26;
    UptadateIfGreater(30, max_distans);
    cout << max_distans;
}