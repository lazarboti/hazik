public class Main
{
    public static void main(String[] args) 
    {
        if (args.length !=1) {
            System.err.println("Hiba! Adjon meg egy sztringet!");
            System.exit(1);
        }
        //else
        StringBuilder ujszo = new StringBuilder();
        String szo = args[0];
        for(int i = 0; i < szo.length();i++)
        {
            char betu = szo.charAt(i);
            if (Character.isUpperCase(betu)) {
                ujszo.append(Character.toLowerCase(betu));
                
            }
            else if (Character.isLowerCase(betu)) {
                ujszo.append(Character.toUpperCase(betu));
                
            }
            else
            {
                ujszo.append(betu);
            }

        }
        System.out.println(ujszo.toString());
    }
}