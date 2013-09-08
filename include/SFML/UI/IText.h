/*
 *  Copyright © 2013 mathdu07
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ITEXT_H_
#define ITEXT_H_

#include <SFML/Graphics.hpp>

namespace sf
{
namespace ui
{

/*
 * An interface that allow component to have a text.
 * Implement it in your component to make faster
 * components that use text.
 */
class IText
{
public:
	//METHODS ------------------------------------------------------------
	virtual ~IText();
	//--------------------------------------------------------------------

	//GETTERS/SETTERS ----------------------------------------------------
	/*
	 * Returns the text's string
	 */
	virtual const sf::String& getText() const = 0;

	/*
	 * Sets the text's string of the component
	 * Don't forget to set the font
	 * Params:
	 * 	text - the new string of the component
	 */
	virtual void setText(sf::String const &text) = 0;

	/*
	 * Returns the font of the component, if any returns null
	 */
	virtual const sf::Font* getFont() const = 0;

	/*
	 * Sets the font of the component's text
	 */
	virtual void setFont(sf::Font const &font) = 0;

	/*
	 * Returns the font's size of the component
	 */
	virtual unsigned int getFontSize() const = 0;

	/*
	 * Set the font's size of the component
	 * Params:
	 * 	size - the font's size
	 */
	virtual void setFontSize(unsigned int size) = 0;

	/*
	 * Returns the font's color of the text
	 */
	virtual sf::Color getFontColor() const = 0;

	/*
	 * Sets the color's font of the text
	 * Params: the text's color
	 */
	virtual void setFontColor(sf::Color color) = 0;
	//--------------------------------------------------------------------
};

} /* namespace ui */
} /* namespace sf */
#endif /* ITEXT_H_ */
