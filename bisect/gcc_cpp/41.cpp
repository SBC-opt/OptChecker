int x,y;
void func(int size_){
    for(int i=1;i<size_+1;i++){
        if(size_){
            size_++;
            x++;
        }
        size_--;
        y++;
    }
}