import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

// function - Tushar Asthana 
// bugs introduced DF
public class datetime_convert {
    public static void main(String[] args) {
        String dateStr = "2022-03-17 10:45:30";
        // format for date 
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss");
        //parses thru the data that will present in the object file 
        LocalDateTime dateObj = LocalDateTime.parse(dateStr, formatter);
        String formattedDate = dateObj.format(DateTimeFormatter.ofPattern("MM/dd/yyyy HH:mm:ss"));

        System.out.println(dateObj);
    }
}
