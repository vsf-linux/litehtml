#ifndef LH_EL_STYLE_H
#define LH_EL_STYLE_H

#include "html_tag.h"

namespace litehtml
{
	class el_style : public element
	{
		elements_vector		m_children;
	public:
		explicit el_style(const std::shared_ptr<document>& doc);

		void			parse_attributes() override;
		bool			appendChild(const ptr &el) override;
		const char*		get_tagName() const override;
	};
}

#endif  // LH_EL_STYLE_H
