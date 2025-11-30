import pandas as pd
import numpy as np

numpy_array = np.array([[1,2,3],[4,5,6],[7,8,9]])
column_name = ['Column1','Column2','Column3']
df = pd.DataFrame(data = numpy_array, columns = column_name)
print(df)
