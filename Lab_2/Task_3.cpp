#include<iostream>
#include<bitset>
using namespace std;

#define read(type,var) type var;cin>>var;

// void ToHexa(int n)
// {
//     char hexNum[100];
//     int i = 0;
//     while (n != 0) 
//     {
//         int temp = 0;
   
//         temp = n % 16;
//         if (temp < 10) {
//             hexNum[i] = temp + 48;
//             i++;
//         }
//         else {
//             hexNum[i] = temp + 55;
//             i++;
//         }
//         n = n / 16;
//     }
// }

int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}
 
int sum (int x, int y) 
{
    int carry;
    while(y!= 0) {
        carry = x & y;
        x = x^y;
        y = carry << 1;
    }
    return x;
}

int toDen(string val, int base) {
    int len = val.size();
    int b = 1;
    int decValue = 0;
    for (int i = len - 1; i >= 0; i--) {
        if(base == 16) {
            if (val[i] >= '0' && val[i] <= '9') {
                decValue += (int(val[i]) - 48) * b;
                b *= base;
            }
            else if (val[i]>= 'A' && val[i] <= 'F') {
                decValue += (int(val[i] - 55)) * b;
                b *= base;
            }
        }
        else if (b == 8) {
            decValue += int(val[i] -'0') * b;
            b *= base;
        }
        
    }
    return decValue;
}
int decimaltoOctal(int deciNum)         
{
 
    int octalNum = 0, countval = 1;
    int dNo = deciNum;
 
    while (deciNum != 0) 
    {
 
        int remainder = deciNum % 8;
 
        octalNum += remainder * countval;
        countval = countval * 10;
        deciNum /= 8;
    }
    return octalNum;
}


int main()
{

    cout<<"Enter Base System: ";
    read(int,x);
    cout << "Enter the first number: ";
    read(string, num1);
    cout << "Enter the second number: ";
    read(string, num2);

    switch(x) {
        case 2: {
            int binary1 = stoi(num1);
            int binary2 = stoi(num2);
            int result = binaryToDecimal(binary1) + binaryToDecimal(binary2);
            cout << "The answer is: " << bitset<16>(result);
            break;}
        case 8: {
            int oct1 = toDen(num1, 8);
            int oct2 = toDen(num2, 8);
            int result= oct1+oct2;
            cout<<"The answer is: "<< decimaltoOctal(result);
            break;}
        case 10: {
            int n1=stoi(num1);
            int n2=stoi(num2);
            int result=n1+n2;
            cout<<"The answer is: "<<result;
            break;}
        case 16:{
            // int hex1= toDen(num1,16);
            // int hex2= toDen(num2,16);
            // int result=hex1+hex2;
            // cout<<"The answer is: "<< ToHexa(result); 
            break;}
        default:
            cout << "Invalid Input!\n\n";

    }


}