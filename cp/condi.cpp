 #include<iostream>
using namespace std;

int main()

{


 int num_arrays, num_queries;
    cin >> num_arrays >> num_queries;

    int **arrays = new int*[num_arrays];
    
    for (int i = 0; i < num_arrays; ++i)
    {
        int size;
        cin >> size;
        arrays[i] = new int[size];
        
        for (int j = 0; j < size; ++j)
        {
            cin >> arrays[i][j];
        }
    }
    
    for (int i=0; i < num_queries; ++i)
    {
        int which_array, which_element;
        cin >> which_array >> which_element;
        cout << arrays[which_array][which_element] << endl;
    }
    
    // Cleanup
    for (int i= 0; i < num_arrays; ++i)
    {
        delete[] arrays[i];
    }
    delete[] arrays;
    
    return 0;
}