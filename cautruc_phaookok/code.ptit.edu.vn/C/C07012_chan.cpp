#include <stdio.h>
#include <stdlib.h>
struct SinhVien{
	int ma;
    char ten[300];
    char gt[50];
    
    float mua, ban, lai;
    
};
typedef SinhVien SV;
void nhap(SV *sv);
void nhapN(SV a[], int n);
void xuat(SV sv);
void xuatN(SV a[], int n);

void sapxep(SV a[], int n);
int main(){
    int n;
    scanf("%d", &n);
    SV a[n];  
    nhapN(a, n);
    sapxep(a, n);
    xuatN(a, n);
    return 0; 
	}

void nhap(SV *sv){
    fflush(stdin); gets(sv.ten);
    gets(sv.gt);
    scanf("%f%f", &sv.mua, &sv.ban);
    sv.lai = sv.ban - sv.mua  ;
}
 
void nhapN(SV a[], int n){
    for(int i = 0; i< n; ++i){
        a[i].ma=i+1;
        nhap(a[i]);
    }
}
void xuat(SV sv){
	printf("%d ", sv.ma);
    printf("%s ", sv.ten);
    printf("%s ", sv.gt);
    printf("%g", sv.lai);
}
void xuatN(SV a[], int n){
    for(int i = 0;i < n;++i){
        xuat(a[i]);
        printf("\n");
    }
}
void sapxep(SV a[], int n){
    SV tmp;
    for(int i = 0;i < n-1;i++){
        for(int j = i+1; j < n;j++){
            if(a[j].lai > a[j-1].lai){
                tmp = a[j];
                a[j] = a[j-1];
                a[j-1] = tmp;
            }
        }
    }
}
