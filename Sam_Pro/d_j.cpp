#include <iostream>
using namespace std;
namespace definition { int jungui = 1; }

using namespace definition;
namespace justice { int jungui = 0;}

int main(void)
{
	cout << jungui << endl;
	//std��� ��
	cout << justice::jungui << endl;
}