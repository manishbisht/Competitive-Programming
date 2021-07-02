def findName(s):
	if s >= 0 and s < 10:
		return "video0000" + str(i)
	elif s >= 10 and s < 100:
		return "video000" + str(i)
	elif s >= 100 and s < 1000:
		return "video00" + str(i)
	elif s >= 1000 and s < 10000:
		return "video0" + str(i)
	elif s >= 10000 and s < 100000:
		return "video0" + str(i)

import urllib
for i in xrange(768, 1170):
	urllib.urlretrieve("https://d1qf0ozss494xv.cloudfront.net/ec2cf8f3-78ce-4ed2-951d-85fc3abc326cDynamic20Programming20with20Bitmasks20LIVE20Webinar205BHinglish5D2020by20Prateek20Narang2C20Coding20Blocksmp4/" + findName(i) + ".ts?Key-Pair-Id=APKAIX3JJRW7RHDSNHGA&Signature=MY4TeCGZPCV0HGvvFnz%2BYr3xiezez5wNnNJDJnAIvN%2BVklGpnuH8b4TPE4g306kaRUy8Kcq4qeQ4Btl9U9hUHwBknmjLZZGwGz2p6DcW%2FUF8p%2Bqp2eHvLTHZBwQCS9mA1SqrELEUdqI6dfUm1Y64%2BtKFz8PdJpZd1BzSDRDQLd%2FzgOEPVgGWhNRB%2FT7gm6m4V7%2FtOvp4JYIxmUU5RO0R3V1WNAsF9hsz3VRKDrvP3vYGAn3MFPWUis2hqHi7wl36nykEK8HGpp9HkliGMBEOXx3tyZBQ5YPiDip9VYWaOhyo3WaRG5dRdm7Lh%2FAdM4lIkqYSSyZ4kWCu0HZVhKz1qQ%3D%3D&Policy=eyJTdGF0ZW1lbnQiOlt7IlJlc291cmNlIjoiaHR0cHM6Ly9kMXFmMG96c3M0OTR4di5jbG91ZGZyb250Lm5ldC9lYzJjZjhmMy03OGNlLTRlZDItOTUxZC04NWZjM2FiYzMyNmNEeW5hbWljMjBQcm9ncmFtbWluZzIwd2l0aDIwQml0bWFza3MyMExJVkUyMFdlYmluYXIyMDVCSGluZ2xpc2g1RDIwMjBieTIwUHJhdGVlazIwTmFyYW5nMkMyMENvZGluZzIwQmxvY2tzbXA0LyoiLCJDb25kaXRpb24iOnsiRGF0ZUxlc3NUaGFuIjp7IkFXUzpFcG9jaFRpbWUiOjE1MTg0MTk3NjJ9fX1dfQ%3D%3D", findName(i)+".ts")




# ffmpeg -i index.m3u8 -c copy output.ts
# ffmpeg -y -i output.ts -c:v copy -strict -2 full.mp4




