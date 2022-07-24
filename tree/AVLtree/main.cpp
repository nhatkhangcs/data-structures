int main(){
    ptrNode avlTree;
    Init(avlTree);

    int opt = 0;
    do{
        system("cls");
        cout << "Tree operations: \n";
        cout << "1. Check if tree is empty. \n";
        cout << "2. Add key into tree. \n";
        cout << "3. Find a key in tree.\n";
        cout << "4. Delete a key in tree. \n";
        cout << "5. NLR Traverse. \n";
        cout << "6. Check for balance. \n";
        cout << "7. Cancel the tree \n";
        cout << '\n';
        cout << "Choose an operation: ";
        cin >> opt;
        switch(opt){
        case 1:{
            if(isEmpty(avlTree)) cout << "The tree is empty! \n";
            else cout << "The tree is not empty. \n";
            system("pause");
            break;
        }

        case 2:{
            int theKey;
            cout << "Input your key here: ";
            cin >> theKey;
            Insert(avlTree, theKey);
            break;
        }

        case 3:{
            if(isEmpty(avlTree)) cout << "The tree is empty.\n";
            else{
                int theKey;
                cout << "Input your key here: ";
                cin >> theKey;
                ptrNode p = Find(avlTree, theKey);
                if(p != nullptr) cout << "Key exists! \n";
                else cout << "Key does not exist in tree! \n";
            }
            system("pause");
            break;
        }

        case 4:{
            int theKey;
            cout << "Input your key here: ";
            cin >> theKey;
            bool error;
            Remove(avlTree, theKey, error);
            if(error) {
                cout << "The key does not exist in the tree.\n";
                system("pause");
            }

            break;
        }

        case 5:{
            if(isEmpty(avlTree)) cout << "The tree is empty! \n";
            else Traverse(avlTree);
            system("pause");
            break;
        }

        case 6:{
            vector<int> temp = {};
            int n;
            cout << "Input the number of nodes here: ";
            cin >> n;
            for(int i = 0; i < n; i++){
                int x;
                cin >> x;
                temp.push_back(x);
            }

            int i = 0;
            Create(avlTree, temp, i);
            int height;
            bool isAVL = isBalanced(avlTree, height);
            if(isAVL) cout << "This is an AVL tree.\n";
            else cout << "This is not an AVL tree.\n";
            system("pause");
            break;
        }

        case 7:{
            Clear(avlTree);
            break;
        }
    }
    } while(opt != 0);

    return 0;
}
