#This program formats the date for you
from datetime import datetime

date_str = "2022-03-17 10:45:30"
date_obj = datetime.strptime(date_str, '%Y-%m-%d %H:%M:%S')
formatted_date = date_obj.strftime('%d/%Y/%m %H:%M:%S')

print(formatted_date)
