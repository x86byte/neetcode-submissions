// rotone formul
if (c >= 'a' && c <= 'z')
{
    if (c == 'z')
        c = 'a';
    else
        c = c + 1;
}

// rot13 formul
if (c >= 'a' && c <= 'z')
{
    if (c <= 'm')
        c = c + 13;
    else
        c = c - 13;
}
