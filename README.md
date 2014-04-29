TerminalColor
=============

C++ API for colored terminal applications.

# Instructions

There are a few simple ways to change colors:

1. Using the `Color` class to change the foreground (text) color:
	std::cout << TCOM::Color::RED << std::endl;
2. Using the `Command` class to change the foreground color:
	std::cout << TCOM::Command::ChangeForegroundColor(Color::RED) << std::endl;
3. Using the `Command` class to change the background (fill) color:
	std::cout << TCOM::Command::ChangeBackgroundColor(Color::RED) << std::endl;
4. Using the `Command` class to change both the foreground and background color:
	std::cout << TCOM::Command::ChangeColor(Color::RED, Color::Blue) << std::endl;

A few other text-changing commands are also available:

1. Make the text bold:
	std::cout << TCOM::Command::MakeTextBold() << std::endl;