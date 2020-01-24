#include <iostream>
#include "inja.hpp"

using namespace std;
using namespace inja;
using json = nlohmann::json;
int main(){
    Environment env;
    json data;
    data["cssdir"] = "css";
    data["jsdir"] = "js";
    data["views"]["home"] = true;
    data["views"]["about"] = false;
    data["views"]["blog"] = false;
    data["views"]["projects"] = false;
    data["views"]["contact"] = false;
    Template temp = env.parse_template("site/index.html");

    env.write(temp, data, "./outputsite/index.html");
    cout<<"works!"<<endl;

   
    return 0;
}