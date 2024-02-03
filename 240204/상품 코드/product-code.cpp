#include <iostream>
using namespace std;
class Product{
    public:
        string Product_Name;
        int Product_Code;
        Product(string Product_Name="codetree",int Product_Code=50){
            this->Product_Name=Product_Name;
            this->Product_Code=Product_Code;
        }
};
int main(){
    Product product=Product();
    cout << "product " << product.Product_Code << " is " << product.Product_Name << "\n";
    cin >> product.Product_Name >> product.Product_Code;
    cout << "product " << product.Product_Code << " is " << product.Product_Name;
    return 0;
}