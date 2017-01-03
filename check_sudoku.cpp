
int check_sudoku(int arr[9][9])
{
	int i,j, n=0 , sum=0 , temp_sum;
	for(i=0 ; i<9 ; i++)
	{
		if(arr[0][i] > 0 && arr[0][i] < 10)
			n++;
		else
			break;
	}
	n=n-1;
	for(i=1 ; i<n ; i++)
	{
		sum += i;
	}
	
	for(i=0 ; i<n ; i++)
	{
		temp_sum = 0;
		for(j=0 ; j<n ; j++)
		{
			temp_sum += arr[i][j];
		}
		if(temp_sum != sum)
			return 0;
	}
	for(i=0 ; i<n ; i++)
	{
		temp_sum = 0;
		for(j=0 ; j<n ; j++)
		{
			temp_sum += arr[j][i];
		}
		if(temp_sum != sum)
			return 0;
	}
	
	return 1;
	
}

