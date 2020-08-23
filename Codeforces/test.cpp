For(i, 0, 2 * n + 1) {
        if(pref[i] == n) {
            cout << ar[i+1] - ar[i] - 1 << "\n";
            break;
        }
    }