#include "command.h"
#include "color.h"
#include "column_group.h"

using namespace std;
using namespace TCOM;

int main()
{
	cout << Command::ClearDisplay();

	cout << "Hello" << endl;

	cout << Command::MoveCursorTo(0, 0);

	int x;
	cin >> x;

	cout << cin.fail() << endl;
	return 0;
}
