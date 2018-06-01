
#include <iostream> 
#include <string> 
using namespace std;

#define tab "\t"  

int main()
{
	locale def;
	cout << def.name() << endl;
	locale current = cout.getloc();
	cout << current.name() << endl;

	float val = 1234.56;      cout << val << endl;

	//chage to french/france 
	cout.imbue(locale("chs"));
	current = cout.getloc();
	cout << current.name() << endl;
	cout << val << endl;

	//������˵��locale���÷���������Ǳ��������ݣ���Ϊ�����õ���imbue����
	cout << "*********************************" << endl;

	//Ϊ�˱�֤���ػ����������/ʱ��/���ҵȣ���chs��ʾ�й���wcout����ʹ�ñ��ػ��������� 
	wcout.imbue(std::locale("chs"));

	//string Ӣ�ģ���ȷ�ߵ�λ�ã���ʾ�ڶ����ַ���ȷ 
	string str1("ABCabc");
	string str11(str1.rbegin(), str1.rend());
	cout << "UK\ts1\t:" << str1 << tab << str1[1] << tab << str11 << endl;

	//wstring Ӣ�ģ���ȷ�ߵ�λ�ã���ʾ�ڶ����ַ���ȷ
	wstring str2 = L"ABCabc";
	wstring str22(str2.rbegin(), str2.rend());
	wcout << "UK\tws4\t:" << str2 << tab << str2[1] << tab << str22 << endl;

	//string ���ģ��ߵ��󣬱�����룬�ڶ����ַ���ȡҲ���� 
	string str3("���ô��");
	string str33(str3.rbegin(), str3.rend());
	cout << "CHN\ts3\t:" << str3[1] << tab << str33 << endl;

	//��ȷ�Ĵ�ӡ�ڶ����ַ��ķ��� 
	cout << "CHN\ts3\t:RIGHT\t" << str3[2] << str3[3] << endl;

	//���ģ���ȷ�ߵ�λ�ã���ʾ�ڶ����ַ���ȷ 
	wstring str4 = L"���ô��";
	wstring str44(str4.rbegin(), str4.rend());
	wcout << "CHN\tws4\t:" << str4 << tab << str4[1] << tab << str44 << endl;

	//ֻ��char���͵�stringʱ�ſ�����˹���
	wstring str5(str1.begin(), str1.end());
	wstring str55(str5.rbegin(), str5.rend());
	wcout << "CHN\tws5\t:" << str5 << tab << str5[1] << tab << str55 << endl;

	//��˹��콫ʧ��!!!!
	wstring str6(str3.begin(), str3.end());
	wstring str66(str6.rbegin(), str6.rend());
	wcout << "CHN\tws6\t:" << str6 << tab << str6[1] << tab << str66 << endl;

	return 0;
}