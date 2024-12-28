1. write the data frame in python having the following data 

```python
import pandas as pd
data = {

    "Name" : ["geethu","ram","reenu","james","ritu"],
    "Marks":[56,89,95,56,89]
} 
df = pd.DataFrame(data)
#for key,value in data.items 
#print(key,value)
print(df)
```


### output

```
    Name Marks 
0 geethu 56 
1 ram 89 
2 reenu 95 
3 james 56 
4 ritu 89
```





2. write the data frame in python having the following data 

```python
import pandas as pd

data = {"Cars":["bmw","volvo","ford"],

        "no":[3,7,2],

        "location":["kochi","bangalore","tvm"]}  

df = pd.DataFrame(data)


print(df)
```


### output

```
  Cars no location 
0 bmw 3 kochi 
1 volvo 7 bangalore 
2 ford 2 tvm
```



getting a csv file from from data.csv

```python
import csv
import pandas as pd

with open('data.csv', newline='') as csvfile:
    spamreader = csv.reader(csvfile, delimiter=' ', quotechar='|')
    for row in spamreader:
        print(', '.join(row))
```


```python

import pandas as pd
f1 = pd.read_csv("data.csv")

print(f1)

```

**Q**. display the entire dataset

```python
  

import pandas as pd

f1 = pd.read_csv("data.csv")

print(f1.to_string()) #converting the dataset to string
```

**Q**. print the first 15 rows of the data

```python
print(f1.head(15))
```

 **Q**. print the last 15 rows of the dataset

```python
print(f1.tail(15))
```

**Q**. display the info about data in dataset

```python
f1.info()
```


import new file d.csv


**Q**. 1. display the first row
```python
import pandas as pd
d1 = pd.read_csv("d.csv")
print(d1.head(1))
```

**Q**. 2. to display the forst row
```python
print(d1.head(1))
```

**Q**. 3. to display the last row
```python
	print(d1.tail(1))

```



```python
import csv
import pandas as pd

with open('d.csv', newline='') as csvfile:
    spamreader = csv.reader(csvfile, delimiter=' ', quotechar='|')
    for row in spamreader:
        print(', '.join(row))
```

**Q**. print the null values of all columns in the dataset

```python
d1 = pd.read_csv("d.csv")
d1.isnull().sum()
```

**Q**. display the statistical view of the dataset

```python
	d1.describe()
```

  
**Q**. display the mean of the maximum pulse in the dataset

```python
a = f1["Maxpulse"].mean()
print(a)
```


**Q**. display the datatypes of data in the  data set

```python
f1.dtypes
```

**Q**.  display the number of unique values in the data set

```python
f1.nunique( )
```

**Q**.  display the  percentage of null value in each colum

```python
m = ((f1.isnull().sum())/len(f1))*100
print(m)
```

**Q**.  check the status of null values in the dataset

```python
print(f1.isnull())
```

**Q**.  display the total no or rows and columns in the dataset


```python
f1.shape
```

**Q**.  remove null values from the dataset and print it

```python
print(f1)

f11 = f1.dropna()

print(f11)
```

**Q**. fill the missing values in the dataset with zeros

```python
f1.fillna(0,inplace = True)
print(f1)
```

**Q**. fill the missing values mean of the column

```python
f1.fillna(f1.mean())
print(f1)
```

**Q**. sort the values in the dataset based on max pulse
==erreor==


```python
f1.sort_values("Maxpulse",inplase = "True")

print(f1)
```


**Q**  ==complete==

```python
print(f1.duplicated)
```

**Q** . rename the column main pulse and maxpulse as pulse_new and max_pulse

```python
f1.rename(columns = {"Pulse":"pulse_new","Maxpulse":"max_pulse"},inplace = True)
print(f1)
```

**Q** . ```python
# Import necessary libraries
import pandas as pd
import matplotlib.pyplot as plt

# Load the dataset (replace 'your_dataset.csv' with the actual dataset path)
df = pd.read_csv('your_dataset.csv')

# a) Print the entire dataset
print("Entire Dataset:")
print(df)

# b) Display the size of the dataset (rows × columns)
print("\nSize of the dataset:", df.shape)

# c) Print the first 10 rows
print("\nFirst 10 rows of the dataset:")
print(df.head(10))

# d) Print the last 10 rows
print("\nLast 10 rows of the dataset:")
print(df.tail(10))

# e) Display the information about the dataset
print("\nInformation about the dataset:")
print(df.info())

# f) Display the statistical view of the dataset
print("\nStatistical Summary:")
print(df.describe())

# g) Display the datatypes of each column
print("\nData Types of Each Column:")
print(df.dtypes)

# h) Print the null values of all columns
print("\nNull Values in Each Column:")
print(df.isnull().sum())

# i) Display the number of unique values in the dataset
print("\nNumber of Unique Values in Each Column:")
print(df.nunique())

# j) Print the percentage of null values in each column
print("\nPercentage of Null Values in Each Column:")
print((df.isnull().sum() / len(df)) * 100)

# k) Display the mean of a numeric column (replace 'numeric_column' with your actual column name)
print("\nMean of a Numeric Column:")
print(df['numeric_column'].mean())

# l) Fill the missing values with the mean of the column
df['numeric_column'].fillna(df['numeric_column'].mean(), inplace=True)
print("\nDataset after Filling Missing Values:")
print(df)

# m) Sort the dataset based on the third column
df_sorted = df.sort_values(by=df.columns[2])
print("\nDataset Sorted by Third Column:")
print(df_sorted)

# n) Rename the second column to 'new_column_name'
df.rename(columns={df.columns[1]: 'new_column_name'}, inplace=True)
print("\nDataset after Renaming the Second Column:")
print(df)

# o) Print the categorical and numerical columns
categorical_cols = df.select_dtypes(include=['object']).columns
numerical_cols = df.select_dtypes(include=['number']).columns
print("\nCategorical Columns:", list(categorical_cols))
print("Numerical Columns:", list(numerical_cols))

# p) Delete the last 2 columns and display the new size
df_dropped = df.iloc[:, :-2]
print("\nDataset after Dropping Last 2 Columns:")
print(df_dropped)
print("New Size of the Dataset:", df_dropped.shape)

# q) Plot a boxplot for any numerical column
plt.figure(figsize=(8, 6))
plt.boxplot(df['numeric_column'].dropna(), vert=False)
plt.title('Boxplot for Numeric Column')
plt.show()

# r) Drop outliers using IQR (Interquartile Range)
Q1 = df[numerical_cols].quantile(0.25)
Q3 = df[numerical_cols].quantile(0.75)
IQR = Q3 - Q1

df_no_outliers = df[~((df[numerical_cols] < (Q1 - 1.5 * IQR)) | 
                      (df[numerical_cols] > (Q3 + 1.5 * IQR))).any(axis=1)]
print("\nDataset after Dropping Outliers:")
print(df_no_outliers)
```
