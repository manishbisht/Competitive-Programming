def fun(s):
    try:
        username,url=s.split('@')
        website,extension=url.split('.')
    except ValueError:
        return False
    if username.replace('-','').replace('_','').isalnum() is False:
        return False
    elif website.isalnum() is False:
        return False
    elif len(extension)>3:
        return False
    else:
        return True

 
