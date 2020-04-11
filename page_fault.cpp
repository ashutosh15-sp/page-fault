#include<iostream>
using namespace std;
int main()
{
	double s_etime; //service time for a page fault in an empty page
	cout<<"Enter the service time for empty page in milliseconds:";
	cin>>s_etime;
	double s_rtime;
	cout<<"Enter the service time for modified page:";
	cin>>s_rtime;
	double ma_time; //memory access time
	cout<<"Enter memory access time in nanoseconds:";
	cin>>ma_time;
	double pf_rate; //page fault rate
	double percent;
	cout<<"Enter the percentage of time page is modified:";
	cin>>percent;
	double EAT; //Effective access time
	cout<<"Enter the access time :";
	cin>>EAT;
	double s_etimens=(s_etime*1000000);
	double s_rtimens=(s_rtime*1000000);
	double per=(percent/100);
	//EAT=(1-pf_rate)*ma_time+(pf_rate)*(ma_time+(1-percent)*(s_etime)+(percent)*(s_rtime));
	//using the above formula
	//pf_rate=((EAT-ma_time)/((1-percent)*s_etime));
	double a,b,num,denom;
	a=(1-per)*s_etimens;
	b=per*s_rtimens;
	num=EAT-ma_time;
	denom=(a+b);
	pf_rate=(num/denom);
	cout<<"page fault rate:"<<pf_rate;
}
