#include <iostream>
#include <cstdio>
#include <cstring>
#include <dirent.h>
#include <unistd.h>

using namespace std;

const string trash_folder = ".trash";
const string tmp_folder = "/tmp";

bool is_regular_file(const string& path) {
    struct stat path_stat;
    stat(path.c_str(), &path_stat);
    return S_ISREG(path_stat.st_mode);
}

bool is_trash_file(const string& file) {
    return (file.length() >= trash_folder.length() && file.substr(0, trash_folder.length()) == trash_folder);
}

bool is_tmp_file(const string& file) {
    return (file.length() >= tmp_folder.length() && file.substr(0, tmp_folder.length()) == tmp_folder);
}

void clean_trash() {
    DIR *dir;
    struct dirent *ent;
    if ((dir = opendir(trash_folder.c_str())) != NULL) {
        while ((ent = readdir(dir)) != NULL) {
            string file_name = ent->d_name;
            if (is_regular_file(trash_folder + "/" + file_name)) {
                if (is_trash_file(file_name)) {
                    string file_path = trash_folder + "/" + file_name;
                    remove(file_path.c_str());
                }
            }
        }
        closedir(dir);
    } else {
        cout << "Could not open trash folder." << endl;
    }
}

void clean_tmp() {
    DIR *dir;
    struct dirent *ent;
    if ((dir = opendir(tmp_folder.c_str())) != NULL) {
        while ((ent = readdir(dir)) != NULL) {
            string file_name = ent->d_name;
            if (is_regular_file(tmp_folder + "/" + file_name)) {
                if (is_tmp_file(file_name)) {
                    string file_path = tmp_folder + "/" + file_name;
                    remove(file_path.c_str());
                }
            }
        }
        closedir(dir);
    } else {
        cout << "Could not open tmp folder." << endl;
    }
}

int main() {
    cout << "Cleaning trash..." << endl;
    clean_trash();

    cout << "Cleaning /tmp..." << endl;
    clean_tmp();

    cout << "Done!" << endl;

    return 0;
}
