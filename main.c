//
//  main.c
//  SS16 Bai7
//
//  Created by Little Chick on 31/03/2022.
//

#include <stdio.h>
#include <string.h>
#include <math.h>
int Check(float, float, float, float);
int Say(char);
void Break(char);
void Love(char);
int main(int argc, const char * argv[]) {
    float cc,cn,tc,ht;
    float x;
    char ans,h;
    printf("Tieu chuan ban gai:\n");
    printf("Chieu cao: ");
    scanf("%f",&cc);
    printf("Can Nang: ");
    scanf("%f",&cn);
    printf("Hoc Thuc: ");
    scanf("%f",&ht);
    printf("Tinh Cach: ");
    scanf("%f",&tc);
    printf("Tieu chuan thuc te:\n");
    printf("Chieu cao: ");
    scanf("%f",&cc);
    printf("Can Nang: ");
    scanf("%f",&cn);
    printf("Hoc Thuc: ");
    scanf("%f",&ht);
    printf("Tinh Cach: ");
    scanf("%f",&tc);
    if(x = Check(cc, cn, ht, tc))
    {
        printf("Yeu nhau ko?\n");
        fflush(stdin);
        scanf("%c",&h);
        if(ans = Say(h))
        {
            Love(ans);
        }else{
            Break(ans);
        }
    }else{
        printf("Xin loi da lam phien.\n");
    }
    return 0;
}
int Check(float cc,float cn, float ht, float tc)
{
    float kt;
    kt = (float)(cc + cn + ht + tc)/4;
    if(kt >= 8)
    {
        return 1;
    }else
        return 0;
}
int Say(char kt)
{
    if(kt == 'Y' || kt == 'y')
    {
        return 1;
    }
    return 0;
}

void Break(char tb)
{
    printf("Lai kiep FA\n");
}
void Love(char te)
{
    printf("Thoat e\n");
}
