vector<string> split_string(string str, char delimiter) {
    vector<string> strings;
    stringstream ss(str);
    string t;
    while (getline(ss, t, delimiter)) strings.push_back(t);
    
    return strings;
}
