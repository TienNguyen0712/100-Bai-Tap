//01
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<4*n<<" "<<n*n;
    return 0;
}
//02
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int r;
    cin>>r;
    cout<<fixed<<setprecision(2)<<r*2*3.14<<" "<<fixed<<setprecision(2)<<r*r*3.14;
}  
//03
#include<bits/stdc++.h> 
using namespace std;
int main(){
	int a,b;
    cin>>a>>b;
    cout<<(a+b)*2<<" "<<a*b;
    return 0;
}
//04
#include<bits/stdc++.h> 
using namespace std;
int main(){
	int a,b;
    cin>>a>>b;
    cout<<a+b<<" "<<a*b;
    return 0;
}
//05
#include<bits/stdc++.h> 
using namespace std;
int main(){
	int a,b,c;
    cin>>a>>b>>c;
    cout<<fixed<<setprecision(1)<<float(a+b+c)/3;
    return 0;
}
//06
#include<bits/stdc++.h> 
using namespace std;
int main(){
	int a,b,c;
    cin>>a>>b>>c;
    float p = float((a+b+c))/2;
    cout<<fixed<<setprecision(1)<<float(a+b+c)<<" "<<fixed<<setprecision(3)<<sqrt(p*(p-a)*(p-b)*(p-c));
    return 0;
}
//07
#include<bits/stdc++.h> 
using namespace std;
int main(){
	int a,b;
    cin>>a>>b;
    cout<<fixed<<setprecision(2)<<float(a*b)/2;
    return 0;
}
//08
#include<bits/stdc++.h> 
using namespace std;
int main(){
	int a,b,c;
    cin>>a>>b>>c;
    float p = float((a+b+c))/2;
    float S = sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<fixed<<setprecision(3)<<float(a*b*c)/(4*S);
    return 0;
}
//09
#include<bits/stdc++.h> 
using namespace std;
int main(){
	int a,b,c;
    cin>>a>>b>>c;
	cout<<fixed<<setprecision(1)<<float(a*2+b*2+c)/5;
    return 0;
}
//10
#include<bits/stdc++.h> 
using namespace std;
int main(){
	int a,b;
    cin>>a>>b;
	cout<<a/b<<" "<<a%b;
    return 0;
}
//11
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a = n/3600;
    int b = (n-3600*a)/60;
    cout<<a<<":"<<b<<":"<<n - (3600*a) - (60*b);
     return 0;
}
//12
#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;
if(n < 100) cout<<"00";
else cout<<n/100*10+n%100/10<<" "<<(n/10)%10<<(n%100)%10;
     return 0;
}
//13
#include <iostream>
using namespace std;
int main() {
int n,b,c;
cin>>n>>b>>c;
if(n == b && b == c && c == n){
    cout<<"=";
} else {
    int max = n;
    if(b  > max) max = b;
    if(c  > max) max = c;
    cout<<max;
}
     return 0;
}
//14
#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;
if(0< n && n <= 11) {cout<<"Thieu nhi";}
else if(11 < n && n <= 25 ) {cout<<"Thieu nien";}
else if(25 < n && n <= 50) {cout<<"Trung nien";}
else if(n > 50) {cout<<"Lao nien";}
     return 0;
}
//15
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
float n, a, b;
cin>>n>>a>>b;
if(n + a > b && n + b > a && a + b > n){
    cout<<"Day la 3 canh cua mot tam giac\n";
    float p = (a+b+n)/2;
    cout<<fixed<<setprecision(2)<<float(a+b+n)<<" "<<fixed<<setprecision(1)<<sqrt(p*(p-a)*(p-b)*(p-n));
} else {
    cout<<"Day khong phai la 3 canh cua mot tam giac";
}
     return 0;
}
//16
#include <iostream>
#include <iomanip>

using namespace std;
int main() {
   float thang, nam;
   cin>>thang>>nam;
   float tb = float((thang + nam*2)/3);
   if(tb >= 8) cout<<fixed<<setprecision(1)<<tb<<"\n"<<"Gioi";
   if( 6.5 <= tb && tb < 8) cout<<fixed<<setprecision(1)<<tb<<"\n"<<"Kha";
   if(5 <= tb && tb < 6.5) cout<<fixed<<setprecision(1)<<tb<<"\n"<<"Trung binh";
   if(3.5 <= tb && tb < 5) cout<<fixed<<setprecision(1)<<tb<<"\n"<<"Yeu";
   if(tb < 3.5 ) cout<<fixed<<setprecision(1)<<tb<<"\n"<<"Kem";
     return 0;
}
//17
#include <iostream>
#include <iomanip>

using namespace std;
int main() {
   int thang;
   cin>>thang;
    switch(thang){
        case 2: 
        cout<<"Mua Xuan";
        break;
        case 3: 
        cout<<"Mua Xuan";
        break;
        case 4: 
        cout<<"Mua Xuan";
        break;
        case 5: 
        cout<<"Mua Ha";
        break;
        case 6: 
        cout<<"Mua Ha";
        break;
        case 7: 
        cout<<"Mua Ha";
        break;
        case 8: 
        cout<<"Mua Thu";
        break;
        case 9: 
        cout<<"Mua Thu";
        break;
        case 10: 
        cout<<"Mua Thu";
        break;
        case 11: 
        cout<<"Mua Dong";
        break;
        case 12: 
        cout<<"Mua Dong";
        break;
        case 1: 
        cout<<"Mua Dong";
        break;
    }
     return 0;
}
//18
#include<bits/stdc++.h> //Thư viện tổng
using namespace std;
int main(){
     int ngay, thang, nam;
  cin>>thang>>nam;
    switch (thang)
    {
    case 1:
        ngay = 31;
        break;
    case 3:
        ngay = 31;
        break;
    case 5:
        ngay = 31;
        break;
    case 7:
        ngay = 31;
        break;
    case 8:
        ngay = 31;
        break;
    
    case 10:
        ngay = 31;
        break;
    case 12:
        ngay = 31;
        break;
    case 4:
        ngay = 30;
        break;
    case 6:
        ngay = 30;
        break;
    case 9:
        ngay = 30;
        break;
    case 11:
        ngay = 30;
        break;
    }
    if (thang == 2)
    {
    if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) {ngay = 29;} else {ngay = 28;}
    }
    cout<<ngay;
        return 0;
}
//19
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int d, s = 0;
    for(int i = n; i != 0; i = i/10){
        d = i % 10;
        s = s + d;
    }
        if(s % 10 == 9){
            cout<<s%10<<"\n"<<"may man";
        } else {
            cout<<s%10<<"\n"<<"chua may man";
        }
     return 0;
}
//20
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a = n/5000, b = (n-5000*a)/2000, c = (n -(5000*a) - (2000*b))/1000;
    cout<<a<<" "<<b<<" "<<c;
     return 0;
}
//21
#include <iostream>

using namespace std;
double tienTaxi(int a){
    if(a == 0) {return 0;}
    else if( a == 1) {return 12000;}
    else if(a >= 2 && a <= 30) {return 12000 + ( a-1)*10000;}
    else {return 12000 + 29 * 10000 + (a - 30)*9000;}
    
}
int main(){
    int km;
    cin>>km;
    cout<<tienTaxi(km);
    return 0;
}
//22
#include <iostream>
using namespace std;

double tinhTienDien(int kw) {
    double tien = 0;
    if (kw <= 0) {return tien;}
    if (kw <= 50) { tien = kw * 600;}
    else if (kw <= 100) {tien = 50 * 600 + (kw - 50) * 800;}
    else if (kw <= 200) {tien = 50 * 600 + 50 * 800 + (kw - 100) * 1100;}
    else {tien = 50 * 600 + 50 * 800 + 100 * 1100 + (kw - 200) * 1500;}
    return tien;
}
int main() {
    int kw;
    cin >> kw;
    double tienDien = tinhTienDien(kw);
    cout<<tienDien;
    return 0;
}
//23
#include <iostream>
#include <cmath>
using namespace std;

int main(){
   int n, c = 0;
    cin>>n;
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0){
            c++;
            cout<<i<<" ";
        }
    }
    if(c == 0){
        cout<<"-";
    }
    return 0;
}
//24
#include <iostream>
#include <cmath>
using namespace std;

int main(){
   int n, c = 0;
    cin>>n;
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0){
            c++;
        }
    }
    cout<<c;
    return 0;
}
//25
#include <iostream>
#include <cmath>
using namespace std;

int main(){
   int n, c = 0;
    cin>>n;
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            c=c+i;
        }
    }
    cout<<c;
    return 0;
}
//26
#include <iostream>
#include <cmath>
using namespace std;

int main(){
   int n, c = 0;
    cin>>n;
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 && i % 5 == 0){
            c=c+i;
        }
    }
    cout<<c;
    return 0;
}
//27
#include <iostream>
#include <cmath>
using namespace std;

int main(){
   int n, c = 0;
    cin>>n;
    for(int i = 1; i <= n; i++){
        if(i % 3 == 0 || i % 5 == 0){
            c=c+i;
        }
    }
    cout<<c;
    return 0;
}
//28
#include <iostream>
#include <cmath>
using namespace std;

int main(){
   int n, c = 0;
    cin>>n;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            c++;
        }
    }
    cout<<c;
    return 0;
}
//29
#include <iostream>
#include <cmath>
using namespace std;

int main(){
   int n, c = 0;
    cin>>n;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            c++;
        }
    }
    if(c == 2){
        cout<<"Yes";
    } else {
        cout<<"No";
    }
    return 0;
}
//30
#include <iostream>
#include <cmath>
using namespace std;

int main(){
   int n, m, c = 0;
    cin>>m>>n;
    while(m <= n){
        c = c+m;
        m++;
    }
    cout<<c;
    return 0;
}
//31
#include <iostream>
#include <cmath>
using namespace std;

int main(){
   int n, m, c = 0;
    cin>>m>>n;
    while(m <= n){
        if(m % 3 == 0){
            c++;
        }
        m++;
    }
    cout<<c;
    return 0;
}
//32
#include <iostream>
#include <cmath>
using namespace std;

int main(){
   int n, m, c = 0, sum = 0;
    cin>>m>>n;
    while(m <= n){
        if(m % 3 == 0 || m % 5 == 0){
            c++;
        }
        if(m % 2 ==0){
            sum =  sum + m;
        }
        m++;
    }
    cout<<c<<" "<<sum;
    return 0;
}
//33
#include <iostream>
#include <cmath>
using namespace std;
bool sonnt(int a){
    if (a <= 1) return false;
    for(int i =2; i*i <= a; i++){
        if(a % i == 0) return false;
    }
    return true;
}
int main() {
    int n, m, dem = 0;
    cin>>m>>n;
    while (m <= n){
        if(sonnt(m)) dem++;
        m++;
    }
    cout<<dem<<" ";
    return 0;
}
//34
#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) 
        if (n % i == 0) return false;
    return true;
}

int main() {
    int m, n;
    cin >> m >> n;
    bool found = false;
    for (int i = m; i <= n; ++i) {
        if (isPrime(i)) {
            cout << i << " ";
            found = true;
        }
    }
    if (!found) cout << "-";
}
//35
#include<iostream>
#include <math.h>
#include <iomanip>
using namespace std;
bool sont(int a){
    int c = 0;
    if(a < 2) return false;
    for(int i = 1; i <= a; i++){
        if(a % i == 0) c++;
    }
    return c == 2;
}
int main(){
    int n,m, d = 0, s = 0, dem = 0;
    cin>>m>>n;
    while(m <= n){
        if(sont(m)){
            s+=m;
            d++;
            dem++;
        }
        m++;
    }
    if(dem == 0){
        cout<<"-";
    } else {
        cout<<fixed<<setprecision(2)<<(float)s/d;
    }
    return 0;
}

//36
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int a, b, ucln;
    cin>>a>>b;
	for(int i = 1; i < max(a, b); i++){
        if(a % i == 0 && b  % i == 0){
            ucln = i;
        }
    }
    cout<<ucln;
}
//37
#include <iostream>
using namespace std;
int UCLN(int a, int b) {
    return b == 0 ? a : UCLN(b, a % b);
}
void rutGon(int &t, int &m) {
    int ucln = UCLN(t, m);
    t /= ucln;
    m /= ucln;
}
int main() {
    int t, m;
    cin >> t >> m;
    rutGon(t, m);
    cout << t << "/" << m << endl;
}
//38

//39
#include<iostream>
#include <cmath>

using namespace std;
bool socp(int a){
	int b = sqrt(a);
    return b*b == a;
}
int main(){
    int n;
    cin>>n;
	if(socp(n)){
        cout<<"Yes";
    } else {
        cout<<"No";
    }
    return 0;
}

//40

//41
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n], sum = 0;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}
//42
#include<iostream>
using namespace std;

int main(){
    int n, dem = 0;
    cin>>n;
    int arr[n], sum = 0;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
        if(arr[i] > 0) dem++;
    }
    cout<<dem;
    return 0;
}
//43
#include <iostream>
using namespace std;
int main() {    
    int n, c = 0; cin>>n;
    int arr[n];
    for(int i = 0; i  < n; i++){
        cin>>arr[i];
        if(arr[i] % 2 == 0) c++;
    }
	cout<<c;
    return 0;
}
//44
#include <iostream>
using namespace std;
int main() {    
    int n, c = 0; cin>>n;
    int arr[n];
    for(int i = 0; i  < n; i++){
        cin>>arr[i];
        if(i % 2 == 0) c+=arr[i];
    }
	cout<<c;
    return 0;
}
//45
#include <iostream>
using namespace std;
int main() {    
    int n, c = 0, d = 0; cin>>n;
    int arr[n];
    for(int i = 0; i  < n; i++){
        cin>>arr[i];
        if(arr[i] % 2 == 0) c+=arr[i];
    }
	if(c == 0) {cout<<"-";} else {cout<<c;}
    return 0;
}
//46
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, x, m = -1;
    cin >> n >> x;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >>  arr[i];
        if(arr[i] == x){
           m = i;
           break;
        }
    }
    if(m != -1){
        cout<< "Yes" << endl << m;
    } else {
        cout << "No";
    }
    return 0;
}
//47
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, m = 0, b = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >>  arr[i];
        if(arr[i] > 0){
           m++;
        }
        if(arr[i] < 0){
            b++;
        }
    }
    if(m != 0 || b != 0){
        cout << m << " " << b << endl;
        for(int i = 0; i < n; i++){
            if(arr[i] > 0){
                cout << arr[i] << " "; 
            }
        }
        cout << endl;
        for(int j = 0; j < n; j++){
            if(arr[j] < 0){
                cout << arr[j] << " ";
            }
        }
    } else {
        cout << "0" << " " << "0";
    }
    if(m == 0){
        cout << "-";
    }
    if(b == 0){
        cout << "-";
    }
    
    return 0;
}
//48
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, sum = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >>  arr[i];
        if(arr[i] % 5 == 0){
            cout << arr[i] << " ";
            sum+=arr[i];
        }
    }
    cout << endl << sum;
    return 0;
}
//49

//50
