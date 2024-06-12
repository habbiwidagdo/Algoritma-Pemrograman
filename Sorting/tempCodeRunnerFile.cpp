for (int z = 0; z < z-1; z++)
    {
        if (x[z] > x[z+1])
        {
            tmp = x[z];
            x[z] = x[z+1];
            x[z+1] = tmp;
        }
    }