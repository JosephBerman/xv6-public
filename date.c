# include "types.h"
# include "user.h"
# include "date.h"

int
main(int argc, char ** argv)
{

  struct rtcdate r; 
  if (date(&r))
  {
    printf(2, "error with date\n");
    exit();
  }
    printf(1, "%d/%d/%d %d:%d:%d\n", r.month, r.day, r.year, r.hour, r.minute, r.second);


  exit();
}
