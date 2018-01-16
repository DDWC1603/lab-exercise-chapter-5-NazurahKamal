#include <iostream>
using namespace std;

void masuk_tak()
{
	char ans, c;
	
	cout<<endl<<"Dia shoot masuk tak? (answer y-yes atau n-tidak"<<endl;
	ans=' ';
	
	while(c!='y' and c!='n')
	{
		cin>>c;
		if(c!='y' and c!='n')
		cout<<endl<<"cakap lah bebetul, try again: "<<endl;
	}

	if(c=='n')
	{
		cout<<endl<<"the fudge?!";
		masuk_tak();
	}
	cout<<endl<<"chantek!"<<endl;
}
void masuk_tak(int c);

int main()

{
	
	masuk_tak();
	getchar();
}



