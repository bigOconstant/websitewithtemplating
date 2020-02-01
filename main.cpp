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
    data["views"]["about"] = false;
    data["views"]["blog"] = true;
    temp = env.parse_template("site/views/blogs.html");
    env.write(temp, data, "./outputsite/views/blogs.html"); 

    temp = env.parse_template("site/views/blog.html");
    env.write(temp, data, "./outputsite/views/blog.html"); 

     temp = env.parse_template("site/views/china-2019-page-1.html");
    env.write(temp, data, "./outputsite/views/china-2019-page-1.html"); 


    data["views"]["blog"] = false;
    data["views"]["projects"] = true;

    temp = env.parse_template("site/views/projects.html");
    env.write(temp, data, "./outputsite/views/projects.html");

    data["views"]["projects"] = false;
    data["views"]["contact"] = true;

    temp = env.parse_template("site/views/contact.html");
    env.write(temp, data, "./outputsite/views/contact.html");


    cout<<"Done generating files"<<endl;

   
    return 0;
}