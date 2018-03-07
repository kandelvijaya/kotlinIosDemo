//
//  Copyright © 2018 com.kandelvijaya. All rights reserved.
//

import UIKit
import KotlinIOSLib

class ViewController: UIViewController {

    @IBOutlet weak var label: UILabel!
    override func viewDidLoad() {
        super.viewDidLoad()
        label.text = KIOSLWords().getWords()
    }

}

