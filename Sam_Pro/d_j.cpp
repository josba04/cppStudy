#include <iostream>
using namespace std;
namespace definition { int jungui = 1; }

using namespace definition;
namespace justice { int jungui = 0;}

int main(void)
{
	cout << jungui << endl;
	//std¾ø¾îµµ ‰Î
	cout << justice::jungui << endl;
}