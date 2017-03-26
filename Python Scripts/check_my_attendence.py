import urllib2, datetime, re, time
from bs4 import BeautifulSoup

def removeTabSpaceAndLineBreak(line):
	line = line.replace('\n', '')
	line = line.replace('\t', '')
	line = line.replace('\r', '')
	line = line.replace('  ', '')
	if len(line) == 1:
		line = " "+line
	if len(line) == 2:
		line = " "+line
	return line

url = "http://erp.skit.ac.in/Student/Subjectwise_Attendance"
opener = urllib2.build_opener()
opener.addheaders.append(('Cookie', 'PHPSESSID=cdbbmhusfvj91pc2mcqmo12k40'))
print "Fetching your username and password..."
page = opener.open(url)
print url
print "Logging into your account..."
soup = BeautifulSoup(page, "html.parser")
result = soup.find_all("table", class_="table table-bordered no-margin")
print "Fetching Subject List..."
attendence_list = result[0].find_all("tr")[0]
subjects_list = attendence_list.find_all("th")
print "Fetching Attendence...\n"
attendence = result[0].find_all("tbody")[0].find_all("td")
j = 0
print "Total Attended Percentage Subject Name"
warning = [] 
for i in xrange(1, len(subjects_list)):
	subject_name = removeTabSpaceAndLineBreak(subjects_list[i].text)
	total = removeTabSpaceAndLineBreak(attendence[j].text)
	attended = removeTabSpaceAndLineBreak(attendence[j+1].text)
	percentage = removeTabSpaceAndLineBreak(attendence[j+2].text)
	print total+"    "+attended+"       "+percentage+"      "+subject_name
	percentage = percentage[0:2]	
	if int(percentage) < 75 and int(percentage) != 0:
		warning.append(subject_name)
	j = j + 3
#print("\033[1;31;40m")
error = ""
if len(warning) > 0:
	error = "Warning: Please attend "
	for i in xrange(0, len(warning)-1):
		warning[i] = warning[i][0:-1]
		error = error + warning[i] + ", "
	error = error + warning[i+1] + "classes regularly !!"
print error
#print("\033[0;37;40m")
