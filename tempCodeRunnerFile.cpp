    int e=0,o=0;

    for(auto i:even){
        e += (i-'0');
        e = e*10;
    }
    for(auto j:odd){
        o += (j-'0');
        o = o*10;
    }
    e=e/10;
    o=o/10;
