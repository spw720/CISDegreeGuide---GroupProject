// working psuedocode for the logic around math requirements
// author: Claire Kolln


bool calc(taken) {
	for( std::vector<Course>::iterator it = taken.begin(); it !=taken.end(); ++it) {
		 // loop through the classes to determine if they have taken calc 1
		Course c1 = 0; 
		if (it->name == "Calculas I" || it->name == "Calculas with Theory I" || it->name == "Calculas fo rthe Biological Sciences I") {
			c1 = it;
		} 
		// if they haven't taken any of the 3, make new course that is the option of the thre
	}

	// if they have not taken a calc 1, then add c1 and c2 into the classes that they need to take and return false
	if (c1 == 0) {
		Course calc1_options = new Course("One from Math 251,261,246", "MATH", 0, true, true, true, NoPre, NoPre, false);
		Course calc2_options = new Course("One from Math 252, 261, 246", "MATH", 0, true, true, true NoPre, NoPre, false);
		// TODO add the 2 options to the to_take vector
		return false;	
	}
	// if they have taken calc 1, determine which calc 2 they must take
	else {
		Course c2;
		if (c1 == M251) {
			c2 = M252;
		}
		else if (c1 == M261) {
			c2 = M262;
		}
		else {
			c2 = M247;
		}
	}
	// loop through classes theyve taken to determine if they have taken the calc 2
	for( std::vector<Course>::iterator it = taken.begin(); it !=taken.end(); ++it) {
                if (it == c2) {
			return true;
			// they have taken both of the calculas classes	
			// no classes will be added to the list of clases to take		
                } 
        }
	// TODO add c2 to the to_take vector
	return false;
}






