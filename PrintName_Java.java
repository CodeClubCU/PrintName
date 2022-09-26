//The PRIMARY OBJECTIVE OF THIS CODEBASE IS TO
//LEARN TO USE GIT AND GITHUB AND SEND PULL REQUESTS
public class PrintName_Java {
    public static void main(String args[]) {
        System.out.println("      CodeClub CU      \n");
        System.out.println("List of Members/Contributers:\n");
        // JUST ADD YOUR NAME IN THE ARRAY BELOW AS A STRING(make sure the code works as
        // it should)
        // AND COMMIT THE CHANGES USING GIT TO YOUR REPOSITORY AND
        // THEN SEND A PULL REQUEST
        // AND GET YOUR FIRST PULL REQUEST MERGED
        String[] NameArray = { "CodeClub CU", "Shashank Pandey", "Gourav Kundu", "Shantanu Raut" };
        for (int i = 0; i < NameArray.length; i++) {
            System.out.print((i + 1));
            System.out.println(") " + NameArray[i]);
        }
    }
}
