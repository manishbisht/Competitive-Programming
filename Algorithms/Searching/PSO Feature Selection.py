import numpy as np
import pandas as pd
import seaborn as sns
from random import random
from sklearn import metrics
from sklearn.preprocessing import LabelEncoder
from sklearn.model_selection import train_test_split
from sklearn.model_selection import cross_validate
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import confusion_matrix, make_scorer
from sklearn.metrics import roc_auc_score, accuracy_score
from sklearn.metrics import precision_score, recall_score

import warnings
warnings.filterwarnings('ignore')

def classification_accuracy(y_actual, y_hat):
        TP = 0
        FP = 0
        TN = 0
        FN = 0

        for i in range(len(y_hat)): 
            if y_actual[i]==y_hat[i]==1:
                TP += 1
            if y_hat[i]==1 and y_actual[i]!=y_hat[i]:
                FP += 1
            if y_actual[i]==y_hat[i]==0:
                TN += 1
            if y_hat[i]==0 and y_actual[i]!=y_hat[i]:
                FN += 1
               
        class_acc = float((TP+TN)) / float((TP+FP+TN+FN))
        
        if TP == 0 and FN == 0 :
            recall = 0
        else:
            recall  = float(TP) / float(TP + FN)
        
        if TP == 0 and FP == 0:
            precision = 0
        else:
            precision = float(TP) / float( TP + FP )         
                       
        return (class_acc, recall, precision)
        
def fitness_without_optimization(df1):
  
      # Separate labels and features
      X = df1.drop(columns=['diagnosis'])
      y = df1['diagnosis']
      
      # Convert the M to 1 and B to 0
      label = LabelEncoder()
      y = label.fit_transform(y)
      y[:20]

      # Spilt the train and test data
      X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3)
      # we used 30% test data
    
      # Logistic Regression
      LR = LogisticRegression()
      LR.fit(X_train, y_train)
      LR.score(X_train, y_train)
      y_pred = LR.predict(X_test)
      y_pred_train = LR.predict(X_train)
      
      # find accuracy
      ac = accuracy_score(y_test, y_pred)
      ac_train = accuracy_score(y_train, y_pred_train)
      # Code for ROC_AUC curve
      rc = roc_auc_score(y_test, y_pred)
      
      cm_2 = confusion_matrix(y_test, y_pred)
                
      sns.heatmap(cm_2,annot=True,fmt="d")

      class_acc = classification_accuracy(y_test, y_pred) 
      
      return class_acc
      
df = pd.read_csv('breast_cancer_data.csv')
accuracy = fitness_without_optimization(df.copy())
print('Accuracy  :' + "{:.2f}".format(accuracy[0]))
print('Precision :' + "{:.2f}".format(accuracy[1]))
print('Recall    :' + "{:.2f}".format(accuracy[2]))