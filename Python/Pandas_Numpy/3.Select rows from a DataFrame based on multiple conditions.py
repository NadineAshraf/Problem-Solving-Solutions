import pandas as pd

data = {'Name':['Nadine','Ashraf','Adeeb'],
        'Age':[23,34,56],
        'Salary':[5000,6000,7000]
       }
df = pd.DataFrame(data)
selected_rows = df[(df['Age']>25) & (df['Salary']>5000)]
print(selected_rows)
