#include <iostream>
#include "inja.hpp"

using namespace std;
using namespace inja;
using json = nlohmann::json;
int main(){
    Environment env;

    Template temp = env.parse_template("site/index.html");

    env.write(temp, {}, "./outputsite/index.html");
    cout<<"works!"<<endl;

   
    return 0;
}