class Solution
{
public:
    string capitalizeTitle(string title)
    {

        int len = title.length();

        for (int i = 0; i < len; ++i)
        {

            int firstIndex = i;

            while (i < len && title[i] != ' ')
            {
                title[i] = tolower(title[i]);
                ++i;
            }

            if (i - firstIndex > 2)
            {
                title[firstIndex] = toupper(title[firstIndex]);
            }
        }

        return title;
    }
};