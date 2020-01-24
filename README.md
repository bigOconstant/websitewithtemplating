# templatewebsite

Using c++ to generate html for personal site. No need for javascript for personal site. Just wanted a way to use include html files in html files and inja provides that.

## Compile

compile main.cpp and run

```bash
g++ main.cpp
./a.out
```
html files will be spit out in outputsite directory.

## Dependencies (included already)
* [nlohmann/json](https://github.com/nlohmann/json)

* [inja](https://github.com/pantor/inja)