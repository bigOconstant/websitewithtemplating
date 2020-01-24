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
    data["level"] ="views/";
    Template temp = env.parse_template("site/index.html");

    env.write(temp, data, "./outputsite/index.html");

    data["views"]["home"] = false;
    data["views"]["about"] = true;
    data["cssdir"] = "../css";
    data["jsdir"] = "../js";
    data["level"] ="";
    temp = env.parse_template("site/views/about.html");
    env.write(temp, data, "./outputsite/views/about.html");
    cout<<"works!"<<endl;

   
    return 0;
}