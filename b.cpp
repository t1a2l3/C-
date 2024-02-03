#include <iostream>

using namespace std;



void copyGamma(int inStock[][4], int gamma[]);
void copyAlphaBeta(int instock[][4], int alpha[], int beta[]);
void copyAlphaBeta2(int inStock[][4], int alpha[], int beta[]);



int main()
{
    int inStock[10][4];
    int alpha[4] = {1, 2, 3, 4};
    int beta [4] = {5, 6, 7, 8};
    int gamma[4] = {11, 13, 15, 17};
    int delta[10] = {3, 5, 2, 6, 10, 9, 7, 11, 1, 8};

    

    // copyGamma(inStock, gamma);

    // for(i; i<10; i++)
    // {
    //     for(int j=0; j<4; j++)
    //     {
    //         cout<<inStock[i][j]<<' ';
    //     }
    //     cout<<endl;
    // }

    copyAlphaBeta(inStock, alpha, beta);
    copyGamma( inStock,  gamma);
    copyAlphaBeta2( inStock,alpha ,beta);

    for(int i=0; i<10; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<inStock[i][j]<<' ';
        }
        cout<<endl;
    }


}

void copyAlphaBeta(int instock[][4], int alpha[], int beta[])
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<4; j++)
        {
            instock[i][j] = alpha[j];
        }
    }
    for(int i=5; i<10; i++)
    {
        for(int j=0; j<4; j++)
        {
            instock[i][j] = beta[j];
        }
    }
}
void copyGamma(int inStock[][4], int gamma[])
{
    for(int i=0; i<4; i++)
    {
        inStock[0][i] = gamma[i];
    }

    for(int j=1; j<5; j++)
    {
        for (int x=0;x<4;x++)
        {
            inStock[j][x] = inStock[j-1][x] * 3;
 }
}
}
void copyAlphaBeta2(int inStock[][4], int alpha[], int beta[])
{
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<inStock[i][j]<<' ';
        }

}
}
